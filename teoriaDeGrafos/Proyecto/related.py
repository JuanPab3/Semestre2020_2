from spotipy.oauth2 import SpotifyClientCredentials
import json
import spotipy

cid ='4f5bfca13d1e49c49f8664032e543fd5'
secret='b5803a34ead943e1a2c7d1caec07d277'

client_credentials_manager = SpotifyClientCredentials(client_id=cid, client_secret=secret)
sp = spotipy.Spotify(client_credentials_manager= client_credentials_manager)

songs = {
    'songs':[]
}

for i in range(0,100):
    track_results = sp.search(q='year:2018', type='track', limit=50,offset=i)
    print(track_results)
    for i, t in enumerate(track_results['tracks']['items']):
        songs['songs'].append(t)


with open("data_file.json","w") as f:
    json.dump(songs,f)
